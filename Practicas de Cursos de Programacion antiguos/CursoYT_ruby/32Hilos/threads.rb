class Persona
    def initialize
    end

    def met1
        i = 0 
        while i < 5
            puts Time.now
            i += 1
            sleep(2)
        end
    end

    def met2
        i = 0
        while i < 2
            puts "Miguel"
            i += 1
            sleep(5)
        end
    end
end

p = Persona.new
t1 = Thread.new{p.met1}
t2 = Thread.new{p.met2}
t1.join
t2.join
