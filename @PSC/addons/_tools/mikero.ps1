# Load configuration variables.
. .\config.ps1

# Change directory to mod source.
$sourceDirPdriveEdition = "P:\"
Set-Location $sourceDirPdriveEdition

# Get the files we want to build
# TODO, there has to be a way to filter with 3 different values at once, but | from regex doesnt work.
$files = Get-ChildItem -Path ./ -Name -Filter "psc_*"

# Build each folder, in parallel
foreach ($file in $files) {
    "Building into PBO: "+$file
    pboProject.exe -W -M="$outputFolder" "$sourceDirPdriveEdition$file"
}

# Just so that window doesnt close on us.
Read-Host -Prompt "Press Enter to exit"