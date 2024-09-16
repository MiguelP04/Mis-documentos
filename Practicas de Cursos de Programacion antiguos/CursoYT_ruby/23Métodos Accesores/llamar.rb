require_relative "get_set.rb"

c1 = Celular.new("Samsung", "Azul")
puts c1.modelo()
puts c1.modelo = "Note"
puts c1.color()
puts c1.color = "Amarillo"

