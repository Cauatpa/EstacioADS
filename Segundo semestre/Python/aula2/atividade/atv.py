class Veiculo:
    def __init__(self):
        self._nroda = 4
    
    def andar(self):
        print('andei')
        
#-------------------------------------------------#

class VquatroRodas(Veiculo):
    def andar(self):
        self._nroda = 4
        print('andei')

class Vmotorizado(Veiculo):
    def andar(self):
        print('andei')
    def acelerar(self):
        print('acelerando')
        
class VsemMotor(Veiculo):
    def andar(self):
        print('andei')
    def __init__(self):
        self._nroda = 2

class VduasRodas(Veiculo):
    def __init__(self):
        self._nroda = 2
    
#-------------------------------------------------#

class Bicicleta(VsemMotor):
    def pedalar(self):
        print('pedalando')
        
class Caminhão(Vmotorizado):
    def liberar_carga(self):
        print('carga liberada')
    def __init__(self):
        self._nroda = 8
        
class Moto(VduasRodas):
    def capacete(self):
        print('colocar o capacete')
        
class Camionete(VquatroRodas):
    def quatro_por_quatro(self):
        print('ligar o 4x4')
        
class Carro(Veiculo):
        def andar(self):
            print('andei')


SW4 = Camionete()

print(SW4.quatro_por_quatro())

print(SW4._nroda)