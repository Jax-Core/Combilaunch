function Initialize()
    local num = SELF:GetNumberOption("Number")
    local sectionName = SELF:GetOption("SectionName")
    local measureName = SKIN:GetMeasure("Name") --//Name of script measure
    

    local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
    
    local t = {}

    table.insert(t, "[Variables]")    

    for i = 1, num do
        local opt = SELF:GetOption("Option0")

        if i == 1 then
            table.insert(t, opt .. i .. "=" .. doSub(measureName:GetOption("IfMatchAction")))
        else
            table.insert(t, opt .. i .. "=" .. doSub(measureName:GetOption("IfMatchAction" .. i)))
        end
    end
    
    file:write(table.concat(t, "\n"))
    file:close()
end
function doSub(value)
    local substitution = SELF:GetOption("BlankSubstitution")
    local a = string.match(value, '[?"](.+)[?"]')
    if a==null then
        return substitution
    else
        return a
    end
end