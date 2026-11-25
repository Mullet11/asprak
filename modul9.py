items = input().split(", ")
new_item = input()
bought = input()

items.append(new_item)
if bought in items:
    items.remove(bought)
else:
    print(bought, "tidak ada di daftar")

print("Daftar belanja :", items)
print("Jumlah barang :", len(items))