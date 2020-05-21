# python2

import pandas # .csv failo skaitymas

failas = pandas.read_csv("All names.csv", ";")

def pagal_metus_kurios_lyties_daugiau(metai):
	duomenys = failas[failas.metai == metai]

	berniukai = duomenys[duomenys.lytis == "Male"  ]
	mergaites = duomenys[duomenys.lytis == "Female"]

	kiek_berniuku  = len(berniukai)
	kiek_mergaiciu = len(mergaites)

	ko_daugiau = \
		     'berniuku'  if kiek_berniuku  > kiek_mergaiciu \
		else 'mergaiciu' if kiek_mergaiciu > kiek_berniuku  \
		else 'lygiai'

	print("kiek_berniuku = {0}, kiek_mergaiciu = {1}, ko_daugiau = {2}".format(kiek_berniuku, kiek_mergaiciu, ko_daugiau))


metai = input("Iveskite metus: ")
pagal_metus_kurios_lyties_daugiau(metai)
