def average_student_score(query_name, student_marks):
    # Calculate the average using a list comprehension and format to two decimal places
    return format(sum([p for p in student_marks[query_name]]) / len(student_marks[query_name]), ".2f")

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    print(average_student_score(query_name,student_marks))