print('This is BMI calculator')

h = float(input('Please input you height(m): '))
w = float(input('Please input you weight(kg): '))
bmi = w/h**2
print('Your BMI is {}.'.format(bmi))

if bmi < 18.5:
    print('A BMI of under 18.5 indicates that a person has insufficient weight, so they may need to put on some weight. They should ask a doctor or dietitian for advice.')
elif 18.5 <= bmi <= 24.9:
    print('A BMI of 18.5–24.9 indicates that a person has a healthy weight for their height. By maintaining a healthy weight, they can lower their risk of developing serious health problems.')
elif 25 <= bmi <= 29.9:
    print('A BMI of 18.5–24.9 indicates that a person has a healthy weight for their height. By maintaining a healthy weight, they can lower their risk of developing serious health problems.')
else:
    print('A BMI of over 30 indicates that a person has obesity. Their health may be at risk if they do not lose weight. They should talk with a doctor or dietitian for advice.')
    
    
print('From: https://www.medicalnewstoday.com/articles/323586#health-risks')