from abc import ABC,abstractclassmethod
class car(ABC):
    def show(self):
        print('this is the module of the car!!!')
    @abstractclassmethod
    def speed(self):
        pass
class bugati(car):
    def show(self):
        print('this is bugati chiron')
    def speed(self):
        print("it has a top speed of 500km/h")
class lamborgini(car):
    def show(self):
        print('this is lamborgini')
    def speed(self):
        print("it has a high speed of 400km/h")

b = bugati()
b.show()
b.speed()
l = lamborgini()
l.show()
l.speed()