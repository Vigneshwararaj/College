 import sample
s="abcdefghijkl\mnopqrstuvwxyz0123456789\ABCDEFGHIJKL\MNOPQRSTUVWXYZ!@%^&*\()_-+[]{ };/';.,"
passwordlen=int(input("Enter the length of the password"))
password="".join(sample(s,passwordlen))
print(password)
s=s.boldfa