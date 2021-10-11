def kite(n):
    for i in range(1, n+1):
        for j in range(1, n-i+1):
            print(" ", end='')
        for k in range(i):
            print('*', end=' ')

        print()

    for z in range(1, n):
        for x in range(z):
            print(" ", end='')
        for y in range(n-z):
            print('*', end=' ')
        print()
    return ''


def halfkite(n):
    for i in range(1, n+1):
        for j in range(1, n-i+1):
            print(" ", end='')
        for k in range(i):
            print('*', end=' ')

        print()
    return ''


def boundarykite(n):
    for i in range(1, n+1):
        for j in range(1, n-i+2):
            print(" ", end='')
        print('*', end='')
        print(' '*(i-1), end='')
        if i != 1:
            for x in range(i-2):
                print(' ', end='')
            print('*', end='')

        print()
    for z in range(1, n):
        if z < n-1:
            for q in range(z+1):
                print(' ', end='')
            print('*', end='')
            print(' '*(2*(n-z)-3), end='')
            print('*', end='')
            print()
        else:
            for b in range(n):
                print(" ", end='')
            print('*')
    return ''


def triangle(n):
    for i in range(1, n):
        for j in range(1, n-i+2):
            print(" ", end='')
        print('*', end='')
        print(' '*(i-1), end='')
        if i != 1:
            for x in range(i-2):
                print(' ', end='')
            print('*', end='')
        print()
    for z in range(n):
        print(' *', end='')

    return ''
