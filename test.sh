RCol='\033[0m'
Red='\033[33;31m';
Gre='\033[33;32m';

diff_result=$(diff expected.log result.log)
if [[ -z $diff_result ]]; then
	echo -e "${Gre}OK ${RCol}"
else
	echo -e "${Red}KO ${RCol}"
fi
