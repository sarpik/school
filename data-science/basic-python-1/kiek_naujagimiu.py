import pandas # .csv failo skaitymas

failas = pandas.read_csv("All names.csv", ";")

def pagal_metus_ir_varda_kiek_naujagimiu(metai, vardas):
	# randam naujagimi pagal metus ir varda.
	# `&` reiskia `ir` - abi salygos turi atitikti
	naujagimis = failas[(failas.metai == metai) & (failas.vardas.str.lower().str.strip() == vardas.lower().strip())]

	# sutvarkom skaiciu
	kiek_naujagimiu_tuo_vardu = int(naujagimis.naujagimiu_sk.str.replace(" ", ""))

	print("kiek_naujagimiu_tuo_vardu = {0}".format(kiek_naujagimiu_tuo_vardu))


metai =      input("Iveskite metus: ")
vardas = raw_input("Iveskite varda: ")

pagal_metus_ir_varda_kiek_naujagimiu(metai, vardas)
