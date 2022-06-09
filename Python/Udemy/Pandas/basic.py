import pandas

df1 = pandas.DataFrame([[2,4,6],[10,20,30]], index=["Quantity", "Price"], columns=["One", "Two", "Three"])

df2 = pandas.DataFrame([{"Name":"Shajaratul Yakin","Surename":"Mihad"},{"Name":"Rahik"}])

df3 = pandas.read_csv("Supermarkets/supermarkets.csv")

df4 = pandas.read_excel("Supermarkets/supermarkets.xlsx", sheet_name=0)

df5 = pandas.read_json("Supermarkets/supermarkets.json")

print(df5)