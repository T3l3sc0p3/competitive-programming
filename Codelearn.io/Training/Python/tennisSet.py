def tennisSet(score1,score2):
    if score1 > 4 or score2 > 4:
        if (score1 == 7 and score2 == 5) or (score1 == 5 and score2 == 7) or (score1 == 6 and score2 == 7) or (score1 == 7 and score2 == 6): return True
        if (score1 == 6 and score2 < 5) or (score2 == 6 and score1 < 5): return True
    return False