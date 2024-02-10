var capitalizeTitle = function(title) 
{
    title = title.split(" ")
    for(let i = 0; i < title.length; i++)
    {
        if(title[i].length < 3)
        {
            title[i] = title[i].toLowerCase()
        }
        else
        {
            let s1 = title[i][0].toUpperCase()
            let s2 = title[i].slice(1).toLowerCase()
            title[i] = s1 + s2
        }
    }
    return title.join(" ")
};
