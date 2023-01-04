from forex_python.converter import CurrencyRates
c= CurrencyRates()
amount=int(input("Enter the amount: "))
from_currency=input("From Currency: ").upper()
to_currency=input("To Currency:").upper()
print("From",from_currency,"To",to_currency,amount,"is")
result= c.convert(from_currency,to_currency,amount)
print(result)