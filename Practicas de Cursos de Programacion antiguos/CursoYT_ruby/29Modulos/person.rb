require_relative "hablar.rb"
require_relative "module.rb"
class Persona
    def initiliaze()
    end
    
    include Hablar
    include Escribir

end

d = Persona.new
d.mostrar_hablar
d.mostrar_escribir
