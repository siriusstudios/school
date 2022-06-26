# def make_pizza(pizza, *toppings):
#     print(f"{pizza}:")
#     for i in toppings:
#         print(i)
        
        
# make_pizza("Pepperoni", "extra cheese", "corn", "mayo")


# def make_pizza(name, **client_info):
#     print(f"name = {name}")
#     print(f"client info:\n Gmail: {client_info.get('gmail')},\n"
#     f"Username: {client_info.get('username')} )"
#     f"Phone: {client_info.get('phone')} )"
    
    
# make_pizza("Pepperoni", username="Daniel", phone="06082235", gmail="daniel.rt@gmail.com")


# def save_info(Audi):
#     for i in Audi:
#         print(f"{i}: {Audi[i]}")
    

# Audi= {"Horsepower": 245, "Model": "S7", "Color": "Black", "Modifications": ["Exhaust", "Engine", "Wing"]}

# save_info(Audi)


def build_profile(name, surname, **properties):
    Profile = {
        "Name": name,
        "Surname": surname,
        "Phone": properties.get("phone"),
        "IP": properties.get("ip"),
        "Gmail": properties.get("gmail"),
        "Address": properties.get("address"),
    }
    
    for i in Profile:
        print(f"{i}: {Profile[i]}")


name = input("Please enter your name: ")
surname = input("Please enter your surname: ")
ph = input("Please enter your phone: ")
ugmail = input("Please enter your gmail: ")
build_profile(name, surname, phone=ph, ip="233.655.498.1", gmail=ugmail, address="Sundawn street 43")
    

