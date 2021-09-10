def imc_calc  (peso,altura):
  imc = peso/(altura**2)
  return imc


peso_1 = 95
altura_1 = 1.80

print(imc_calc(peso_1,altura_1))