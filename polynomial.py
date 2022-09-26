x = 10 
y = 10.1
print(x)
print(y)
print()

def run_poly(a, b):
    sum = a**6
    sum += 6 * (a**5) * b
    sum += 15 * (a**4) * (b**2)
    sum += 20 * (a**3) * (b**3)
    sum += 15 * (a**2) * (b**4)
    sum += 6 * a * (b**5)
    sum += b**6
    print(f"Result is {'%.2f' % sum}")


print('%.2f'%(x + y) ** 6)
run_poly(x,y)

