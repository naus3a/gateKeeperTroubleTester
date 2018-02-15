#/bin/bash
here="`dirname \"$0\"`"
for i in $here/*.app; do
    cp -r $i ~/Desktop/temp.app
    cp -r ~/Desktop/temp.app $i
    rm -rf ~/Desktop/temp.app

    xattr -dr com.apple.quarantine $i
done
