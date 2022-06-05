all = {"cars": {"1":"toyota", "2": "mitsubishi"}, "music": {1, "casio", "yamaha"}}

def addkey():
    print("please type in the name of key")
    name = input()
    if name:
        print("please type in value ")
        value = input()

    if name and value:
        all[name] = {value}
    
    ##all["motorbike"] = "suzuki"
    print(all)
    
def addval():
    print("please type in a key")
    key = input()
    
    if key in all:
        print("please type in a name of value")
        val = input()
        all[key].update({"3":val})
        print(all)
            
if __name__ == '__main__':
    print('what would you like to do with key?')
    todo = input()
    if todo == "addkey":
        addkey()
           
    if todo == "addval":
        addval()
        
    if todo == "printv":
        for i in all.values():
            print(type(i))
            
    if todo == "printsp":
        print(all["cars"].values())
        print("type in a key")
        key = input()
        if key in all:
            print('please type in index of value')
            val = input()
            answer = all["cars"][val]
            #if answer in all:
            print(answer)
