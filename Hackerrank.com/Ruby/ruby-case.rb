def identify_class(obj)
    if ["Hacker", "Submission", "TestCase", "Contest"].include?(obj.class.name)
        puts "It's a " + obj.class.name + "!"
    else
        puts "It's an unknown model"
    end
end
