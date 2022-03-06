Red='\033[33;31m';
Gre='\033[33;32m';

diff_result=$(diff expected.log result.log)
if [[ -z $diff_result ]]; then
	echo -e "${Gre}OK "
else
	echo -e "${Red}KO "
fi
