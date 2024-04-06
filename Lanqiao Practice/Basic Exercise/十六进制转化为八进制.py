n = int(input())

for _ in range(n):
    hex_number = input()
    dec_number = int(hex_number, 16)
    oct_number = oct(dec_number)[2:].upper()
    print(oct_number)