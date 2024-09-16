class Persona
    def initialize
    end

    def metodo1
        File.open('prueba.txt',"w") do |f|
            f.puts "Buenos dias me presento soy Miguel"
        end
    end

    def lectura
        File.open('prueba.txt',"r") do |f|
            while linea = f.gets()
                puts linea
            end
        end
    end
end

p = Persona.new
p.metodo1

