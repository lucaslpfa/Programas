Lista_1 = ['P','A','Y','A','T','A','H','O','N']
numero_A = Lista_1.count('A')

for i in enumerate(Lista_1):
    letra = i[1]
    if letra =='A':
        Lista_1.pop(i[0])
        
print(Lista_1)