function Initialize()
	local num = SELF:GetNumberOption("Number")
	local sectionName = SELF:GetOption("SectionName")
    local measureName = SKIN:GetMeasure("Launch") --//Name of script measure

	local file = io.open(SKIN:MakePathAbsolute(SELF:GetOption("IncFile")), "w")
	
	local t = {}

    table.insert(t, "[" ..sectionName.. "]")	

    table.insert(t, "C1=" ..doSub(measureName:GetOption("ifMatch")))

	for i = 2, num-1 do
		local j = 0
		
		while true do
			local opt = SELF:GetOption("Option" .. j)
			if opt == "" then
				break
			end
			table.insert(t, opt ..i.. "=" ..doSub(measureName:GetOption("ifMatch" .. i)))
			j = j + 1
		end
	end
	
	file:write(table.concat(t, "\n"))
	file:close()
end

function doSub(value, i)
    return value:gsub("[\\^\\$\\-]", "")
end