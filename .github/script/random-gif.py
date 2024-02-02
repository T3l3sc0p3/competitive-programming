import os, sys, requests, yaml, random

def get_links(token, repo_user, repo_name, branch, dirc):
    headers = {"Authorization": f"Bearer {token}"}
    api_url = f"https://api.github.com/repos/{repo_user}/{repo_name}/contents/{dirc}?ref={branch}"
    response = requests.get(api_url, headers=headers)
    response.raise_for_status()
    links = [item["download_url"] for item in response.json() if item["type"] == "file"]
    return links

def update(path, link, tag):
    with open(path, "r") as file:
        content = file.read()
    start = content.rfind(f'<{tag} align="center">')
    end = content.rfind(f"</{tag}>")
    if start != -1 and end != -1 and start < end:
        img_start = content.find("<img src=", start, end)
        img_end = content.find('>', img_start)
        if img_start != -1 and img_end != -1:
            alt_start = content.find('alt="', img_start) + 5
            alt_end = content.find('"', alt_start)
            updated_content = (
                content[:img_start]
                + f'<img src="{link}" alt="{content[alt_start:alt_end]}"'
                + content[img_end:]
            )
            with open(path, "w") as file:
                file.write(updated_content)

def main(file_path, tag):
    token = os.getenv("repo_token")
    repo_user = os.getenv("repo_user")
    repo_name = os.getenv("repo_name")
    branch = os.getenv("branch")
    dirc = os.getenv("directory")
    links = get_links(token, repo_user, repo_name, branch, dirc)
    update(file_path, random.choice(links), tag)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: python {os.path.basename(sys.argv[0])} <file-name> <tag>")
        sys.exit(1)
    main(sys.argv[1], sys.argv[2])
