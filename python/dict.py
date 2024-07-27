people = [ #lista de dicionário
   {'name': 'cart', 'number': '1010'},
   {'name': 'lila', 'number': '2020'},
   {'name': 'lina', 'number': '3030'},
]

name = input('name: ')

for person in people:
    print(type(person)) #transforma em dicionário
    if person['name'] == name: #se o valor da chave name for igual ao name digitdo pelo usuário
        number = person['number'] # numero recebe o valor da chave number. Posso fazer assim: print(f"{person['number']}")
        print(f'numero {number}')
        break
else:
    print('not found')
