l1 = [1 , 26 , 3 , 4 , 5]
l2 = ['a' , 'b' , 'c' , 'd']

# list.append(newvalue)
# thêm newvalue vào cuối list
l2.append('e')
print(l2)

# list.pop()
# lấy value cuối list ( xóa mẹ nó luôn)
print(l1.pop()) # 5

# list.index(value)
# tìm vị trí đầu tiên xuất hiện value trong list
print(l2.index('c')) # 2

# list.reverse()
# đảo ngược list
l1.reverse()
print(l1)

l1.sort()
print(l1)