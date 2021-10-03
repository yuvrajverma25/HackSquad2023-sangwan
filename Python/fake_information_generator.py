#install faker module
#import faker module 
from faker import Faker
fake = Faker()
print(fake.name())
print(fake.email())
print(fake.country())
print(fake.text())

print(fake.profile())
