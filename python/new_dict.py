people = {
    'Carter': '101010',
    'David': '2020',
    'John': '3040',
}

name = input('name: ')

if name in people:
    number = people[name]
    print(f'found {number}')
else:
    print('not found')