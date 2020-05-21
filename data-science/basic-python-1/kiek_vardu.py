import pandas # .csv failo skaitymas

failas = pandas.read_csv("All names.csv", ";")

def pagal_metus_kiek_vardu(metai):
	naujagimiai = failas[failas.metai == metai]
	kiek_naujagimiu = len(naujagimiai)

	print("kiek_naujagimiu = {0}".format(kiek_naujagimiu))


metai = input("Iveskite metus: ")
pagal_metus_kiek_vardu(metai)
