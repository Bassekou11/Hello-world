amount= eval(input("Enter ur amount: "))
if amount <1000:
    discunt= amount*0.025
    print("Discunt",discunt)

else:
   discunt= amount*0.10
   print("Discunt",discunt)
print("Net TUTAR=",discunt-amount)
