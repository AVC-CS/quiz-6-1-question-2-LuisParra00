import q4


def test_q5_1():

    result = q4.main()
    
    assert result[0] == '3' 
    emp = result[1].split()
    assert emp[0] == '10981011'
    assert emp[1] == 'John'
    assert emp[2] == 'Computer'
    assert emp[3] == '100000'

    emp = result[2].split()
    assert emp[0] == '10981012'
    assert emp[1] == 'Johny'
    assert emp[2] == 'Network'
    assert emp[3] == '110000'
    
    emp = result[3].split()
    assert emp[0] == '10981013'
    assert emp[1] == 'Johnn'
    assert emp[2] == 'HR'
    assert emp[3] == '90000'