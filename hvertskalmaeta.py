cities = {"Kopavogur": (6, 387), "Hafnarfjordur": (12, 391), "Reykjanesbaer": (48, 427), 
          "Gardabaer": (9, 389), "Mosfellsbaer": (16, 371), "Arborg": (64, 428), "Akranes": (49, 350),
          "Fjardabyggd": (659, 290), "Mulathing": (603, 216), "Seltjarnarnes": (4, 390)}

city = input()

if city == "Reykjavik":
    print("Reykjavik")
elif city == "Akureyri":
    print("Akureyri")
else:
    x, y = cities[city]
    if x < y:
        print("Reykjavik")
    else:
        print("Akureyri")