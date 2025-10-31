#!/usr/bin/env python3
"""
sudo apt update
sudo apt install python3-venv

python3 -m venv ~/afl-venv

source ~/afl-venv/bin/activate

pip install python-afl

python App/FuzzerTest.py < TestInput/TestInput1.txt
"""
import sys
import afl
import os

# -----------------------------------------
# Collocate qui la funzione di test
# -----------------------------------------
def testFunction(a, b, c):
    # esempio: sostituire con la logica di test desiderata
    print(a + b + c)


def main():
    in_str = sys.stdin.read()
    # gestisci input vuoto per evitare ValueError
    if not in_str:
        return

    a, b, c = in_str.strip().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    testFunction(a, b, c)


if __name__ == "__main__":
    afl.init()
    main()
    os._exit(0)
