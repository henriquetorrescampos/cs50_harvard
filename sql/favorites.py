import csv
# metadata describre my data (columns)

with open('favorites.csv', 'r') as file:
    reader = csv.reader(file)
    next(reader) #next line instead from the first by default
    for row in reader:
        favorite = row[1]
        print(favorite)
