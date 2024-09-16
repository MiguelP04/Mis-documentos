class Miclase
    def initilize()
    end

    def mostrar()
       h = {"Nombre" => "Miguel", "Apellido" => "Petit", "Edad" => "18"}
       puts h.key?("Twitter")
       puts h.has_value?("Petit")
       puts h["Nombre"]
       puts h["Peso"] = 64
       puts h
       puts h["Peso"] = 70
       puts h
       puts h.delete("Peso")
       puts h
       puts h.length
       puts h.keys
       puts h.values

    end
end

clase = Miclase.new
clase.mostrar()

