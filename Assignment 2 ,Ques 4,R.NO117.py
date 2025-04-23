# Write aPython program that prompts the user to enter the temperature in celsius and classifies it as:
# Below o degree = Freezing 
# 0 degree to 20 degree = Cold
# 21 degree to 30 degree = Warm
# Over 30 degree = Hot

# Pournima Kiran Nikam.

# FY B

# Roll No 117

temperature = int(input("Enter the temperature in the degree celsius :"))

if 0 > temperature :
    print('Freezing')

elif 0 <= temperature <= 20 :
    print('Cold')

elif 21 <= temperature <= 30 :
    print('Warm')

else:
    print('Hot')

