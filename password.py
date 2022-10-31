import email
import random
import string
import smtplib

lst = list(string.printable)


def password(pw):
    for _ in range(10):
        pw = pw + random.choice(lst)
    return pw

p = password('')

# -----------email the password to the desired account(Application-specific password required)----------
# mailadress=input("Enter your Email: ")
# passw=input("Enter the password")
# server = smtplib.SMTP('smtp.gmail.com', 587)
# server.ehlo()
# server.starttls()
# server.login('Your_email', 'password_of_email')
# server.sendmail('Your_email','Receiver's_email','{p}')
# server.close()

# --------------Print the password for reference--------------
# print(p)

inp = input("Enter the password\n")

if inp == p:
    print("Welcome")
else:
    print("incorrect password")
