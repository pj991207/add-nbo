# add-nbo
# 2022.07.26 과제
이름 : 박병제(7672)
방법 :  1. $ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
        2. $ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
        3. $ ./add-nbo thousand.bin five-hundred.bin
