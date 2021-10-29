import random
a=random.randint(1,100)
b=int(input())
c=1
while c!= 6:
    if b == a:
        print('Вы выиграли')
    elif b>a:
        print('Число, которое я загадал меньше чем Ваше')
    else:
        print('Число, которое я загадал ,больше чем Ваше')
    c+=1
    b=int(input())
if c==6 and a==b:
    print('Вы выиграли')
else:
    print('Вы проиграли ;(')
