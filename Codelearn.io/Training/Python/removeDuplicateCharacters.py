def removeDuplicateCharacters(str):
    for i in str:
        if str.count(i) > 1: str = str.replace(i,'')
    return str