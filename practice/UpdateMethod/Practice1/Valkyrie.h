#pragma once


class SkeletonSoldier;

class Valkyrie
{
public:
	Valkyrie() {}
	~Valkyrie(){}
	void Update();
	void SetTarget(SkeletonSoldier* skeletonSoldier)
	{
		m_skeletonSoldier = skeletonSoldier;
	}
	void SetHP(int hp)
	{
		m_hp = hp;
	}
	int GetHP()
	{
		return m_hp;
	}
	void SetAttack(int attack)
	{
		m_attack = attack;
	}
	const bool GetIsDead() const
	{
		return m_isDead;
	}
	void Damaged(int damage);
private:
	void Attack();
	void Dead();
private:
	SkeletonSoldier* m_skeletonSoldier = nullptr;
	int				m_attack = 0;
	int				m_hp = 0;
	bool			m_isDead = false;
};

