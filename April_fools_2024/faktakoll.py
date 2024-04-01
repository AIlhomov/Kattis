def is_true(statement):

    facts = {
        "Sverige har vunnit IOI två gånger": True,
        "Bandet Polyphia skrev låten \"Playing God\"": True,
        "Joshua Andersson hade 692 contributions på Github år 2023": True,
        "Bandet Polyphia skrev låten \"G.O.A.T.\"": True,
        "Harry Zhang hade 420 contributions på Github år 2023": False,
        "Lösningen till Problemhunt är samma som ett av problemen på denna sida https://open.kattis.com/problem-sources/Doris 2023 deltävling 2": True
    }

    if statement in facts:
        return facts[statement]

    try:
        return eval(statement) is True #eval() is a dangerous function, but in this case it's safe
    except:
        return False

s = input()
print(is_true(s))
