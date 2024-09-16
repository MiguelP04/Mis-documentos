class Miclase
    def initilize()
    end

    def mostrar(procedimiento)
        puts "Hola mundo"
        procedimiento.call("mía")
    end
end

clase = Miclase.new
my_proc = proc do |x|
    puts "Tu mama es " + x
end
clase.mostrar(my_proc)

