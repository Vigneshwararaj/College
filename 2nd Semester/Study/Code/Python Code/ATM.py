print("Welcome to ATM")
chances=3
balance=('$69.00')
while chances>=0:
    pin=int(input('Please Enter the pin :'))
    if pin==1234:
        restart=input('Proceed Further?:')
        while restart not in ('n','N','no','No'):
            print("You have Entered the pin correctly")
            print("Press 1 to check your balance")
            print("Press 2 to withdraw")
            print("Press 3 to pay")
            print("Press 4 to return the card")
            option=int(input('Enter the option you want to choose:'))
            if(option==1):
                print(balance)
                restart=input('Would you like to go back? :')
                if restart in ('n','N','no','No'):
                    break   
            elif (option==2):
                withdraw=float(input('Enter the amount in terms of 100,200,500 or Desired Amount(Press 1) :'))
                if withdraw in [100,200,500]:
                    balance=balance-withdraw
                    restart=input('Would you like to go back? :')
                    if restart in ('n','N','no','No'):
                        print('Thank You')
                elif (withdraw==1):
                    withdraw=float(input('Enter the amount :'))
                    balance=balance-withdraw 
                    restart=input('Would you like to go back? :')
                    if restart in ('n','N','no','No'):
                        break          
                else:
                    print('Invalid amount')
                    restart=input('Would you like to go back? :')
                    if restart in ('n','N','no','No'):
                        break
            elif(option==3):
                pay=int(input('Enter the amount you want to pay :'))
                balance=balance+pay
                restart=input('Would you like to go back? :')
                if restart in ('n','N','no','No'):
                        break
            elif(option==4):
                print("Please take back your card")
                print("Thank you")
                break
    else:
         print("Incorrect pin")
         chances=chances-1
         if chances==0:
             print('No more chances') 
             break