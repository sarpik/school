import pandas # .csv failo skaitymas

failas = pandas.read_csv("All names.csv", ";")

def pagal_varda_populiarumas_kasmet(vardas):
	# filtruojam nekreipdami demesio i didziasias/mazasias raides ir pasalinius tarpus
	visi_su_tuo_vardu = failas[failas.vardas.str.lower().str.strip() == vardas.lower().strip()]

	kiek_su_tuo_vardu = len(visi_su_tuo_vardu)
	print("kiek_su_tuo_vardu = {0}".format(kiek_su_tuo_vardu))

	plt.plot(visi_su_tuo_vardu.metai, visi_su_tuo_vardu.naujagimiu_sk, "bs")

	plt.xlabel("Metai")
	plt.ylabel("Naujagimiu skaicius")

	plt.legend(["Naujagimiu skaicius"])

	plt.show()


vardas = raw_input("Iveskite varda: ")
pagal_varda_populiarumas_kasmet(vardas)
