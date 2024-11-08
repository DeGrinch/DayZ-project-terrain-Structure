@echo off
setlocal enabledelayedexpansion

set "folderPath=P:\zeladordev\data\layers"

echo 	OHHH NOOOO, NOW LOOK WHAT YOU HAVE DONE... THIS SCRIPT WILL
echo. 
echo 			::::::: DELETE DELETE DELETE DELETE ::::::
echo.            
echo   				----- ALL PNG FILES ----- 
echo. 		
echo 				IN THE DIRECTORY:   %folderpath% 
echo. 
echo  		NOTE: IF YOU TYPE "I UNDERSTAND" BELOW, ALL PNG FILES 
echo 			WITHIN THE DIRECTORY: %folderPath%
echo 				WILL BE DELETED... THIS IS IRREVERSIBLE
echo 	TYPE "I UNDERSTAND" TO PROCEED WITH THE DELETION PROCESS
echo.
echo    TYPE "YES" - "NO" - or HIT ANY KEY TO PROCEED WITHOUT ANY FURTHER ACTION AND CLOSE THIS WINDOW.... 

set "input="

for /l %%i in (1,1,30) do (
    set /p "input=Your input [%i/30 seconds]: " || (
        echo No input detected. Closing window.
        timeout 2 > nul
        exit
    )
    if /i "!input!"=="YES" (
        echo Closing window. Perhaps you did not read the important parts above.
        timeout 2 > nul
        exit
    ) else if /i "!input!"=="NO" (
        echo Closing window. Congratulations, not a dang thing is going to happen here today.
        timeout 2 > nul
        exit
    ) else if /i "!input!"=="I UNDERSTAND" (
        echo HOORAAH - Confirmation received, releasing the minions, proceeding with the deletion process...
        cd /d "%folderPath%"
        
        for %%F in (*.png) do (
            del "%%F"
            echo Deleted: %%F
        )

        echo Deletion process completed, collecting all minions and returning them to their boxes...
        goto :end
    ) else (
        echo Invalid input. No action taken.
    )
)

:end
echo.
echo DELETION PROCESS COMPLETED. 
echo.
echo THIS WINDOW WILL CLOSE MOMENTARILY
echo. 
echo SELF DESTRUCTING IN...
for /l %%i in (5,-1,1) do (
    echo %%i seconds
    timeout 1 > nul
)
exit
