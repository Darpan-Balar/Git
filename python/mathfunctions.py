# to check if the number n is  prime
def prime(n):
    for i in range(2, int(n/2)):
        if n % i == 0:
            print(f"{n} is not a prime number. ")
            return False
            exit(0)

    print(f"{n} is a prime number.")
    return True

# to find the gcd of 2 numbers


def hcf(n1, n2):
    hcf = 0
    if n1 > n2:
        if n1 % n2 == 0:
            return n2
        for i in range(1, n2):
            if n1 % i == 0 and n2 % i == 0:
                hcf = i
                return hcf
    elif n1 == n2:
        return n1
    else:
        if n2 % n1 == 0:
            return n2
        for i in range(1, n1):
            if n1 % i == 0 and n2 % i == 0:
                hcf = i
                return hcf

# to find lcm of two numbers


def lcm(n1, n2):
    return n1*n2/hcf(n1, n2)

# list of prime numbers from 2 to n:


def totalprimes(n):
    primes = []
    for i in range(1, n+1):
        if prime(i) == True:
            l.append(i)

    return primes
