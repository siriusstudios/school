class Animal:
    def __init__(self, sound, aname):
        self.aname = aname
        self.sound = sound

    def sound(self):
        print(self.sound)
        
    def rollover(aname):
        print(f"{aname} has rolled over!")
        

class Dog(Animal):
    def __init__(self, aname):
        self.aname = aname
        self.sound = "bark"
        super(Dog, self).__init__(self.sound, self.aname)
        
class Cat(Animal):
    def __init__(self, aname):
        self.aname = aname
        self.sound = "meow"
        super(Cat, self).__init__(self.sound, self.aname)

    def catch_mouse():
        pass
        
        
if __name__ == "__main__":
    
    atype = input("who would you like to call\n")
    todo = input("What would you like the dog to do?")
    aname = input("How would you like to call it?\n")
    if atype == 'dog': 
        dog = Dog(aname)
        if todo == 'rollover':
            dog.rollover()
        if todo == 'sound':
            dog.sound()
    if atype == 'cat': 
        cat = Cat(aname)
        if todo == 'rollover':
            cat.rollover()
        if todo == 'sound':
            cat.sound()
